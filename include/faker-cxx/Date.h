#pragma once

#include <string>

namespace faker
{
class Date
{
public:
    enum class DateFormat
    {
        ISO,
        Timestamp,
    };

    /**
     * @brief Generates a random date in the past.
     *
     * @param years The range of years the date may be in the past. Defaults to `1`.
     *
     * @returns ISO formatted string.
     *
     * @code
     * Date::pastDate() // "2023-12-08T19:31:32Z"
     * Date::pastDate(5) // "2020-06-16T15:24:09Z"
     * Date::pastDate(5, Date::DateFormat::ISO) // "2020-06-16T15:24:09Z"
     * Date::pastDate(5, Date::DateFormat::Timestamp) // "1592321049"
     * @endcode
     */
    static std::string pastDate(int years = 1, DateFormat dateFormat = DateFormat::ISO);

    /**
     * @brief Generates a random date in the future.
     *
     * @param years The range of years the date may be in the future. Defaults to `1`.
     *
     * @returns ISO formatted string.
     *
     * @code
     * Date::futureDate() // "2023-09-27T09:47:46Z"
     * Date::futureDate(5) // "2024-06-11T19:46:29Z"
     * Date::futureDate(5, Date::DateFormat::ISO) // "2024-06-11T19:46:29Z"
     * Date::futureDate(5, Date::DateFormat::Timestamp) // "1718229989"
     * @endcode
     */
    static std::string futureDate(int years = 1, DateFormat dateFormat = DateFormat::ISO);

    /**
     * @brief Generates a random date in the recent past.
     *
     * @param days The range of days the date may be in the past. Defaults to `3`.
     *
     * @returns ISO formatted string.
     *
     * @code
     * Date::recentDate() // "2023-07-05T14:12:40Z"
     * Date::recentDate(10) // "2023-06-29T18:24:12Z"
     * Date::recentDate(10, Date::DateFormat::ISO) // "2023-06-29T18:24:12Z"
     * Date::recentDate(10, Date::DateFormat::Timestamp) // "1718229989"
     * @endcode
     */
    static std::string recentDate(int days = 3, DateFormat dateFormat = DateFormat::ISO);

    /**
     * @brief Generates a random date in the soon future.
     *
     * @param days The range of days the date may be in the future. Defaults to `3`.
     *
     * @returns ISO formatted string.
     *
     * @code
     * Date::soonDate() // "2023-07-07T18:19:12Z"
     * Date::soonDate(10) // "2023-07-15T09:59:11Z"
     * Date::soonDate(10, Date::DateFormat::ISO) // "2023-07-15T09:59:11Z"
     * Date::soonDate(10, Date::DateFormat::Timestamp) // "1718229989"
     * @endcode
     */
    static std::string soonDate(int days = 3, DateFormat dateFormat = DateFormat::ISO);

    /**
     * @brief Generates a random birthdate by age.
     *
     * @param minAge The minimum age to generate a birthdate. Defaults to `18`.
     * @param maxAge The maximum age to generate a birthdate. Defaults to `80`.
     *
     * @returns ISO formatted string.
     *
     * @code
     * Date::birthdateByAge() // "2002-12-07T23:20:12Z"
     * Date::birthdateByAge(20, 30) // "1996-11-14T11:27:09Z"
     * Date::birthdateByAge(20, 30, Date::DateFormat::ISO) // "1996-11-14T11:27:09Z"
     * Date::birthdateByAge(20, 30, Date::DateFormat::Timestamp) // "1718229989"
     * @endcode
     */
    static std::string birthdateByAge(int minAge = 18, int maxAge = 80, DateFormat dateFormat = DateFormat::ISO);

    /**
     * @brief Generates a random birthdate by year.
     *
     * @param minYear The minimum year to generate a birthdate. Defaults to `1920`.
     * @param maxYear The maximum year to generate a birthdate. Defaults to `2000`.
     *
     * @returns ISO formatted string.
     *
     * @code
     * Date::birthdateByYear() // "1965-02-19T02:19:47Z"
     * Date::birthdateByYear(1996, 1996) // "1996-05-19T12:00:23Z"
     * Date::birthdateByYear(1996, 1996, Date::DateFormat::ISO) // "1996-05-19T12:00:23Z"
     * Date::birthdateByYear(1996, 1996, Date::DateFormat::Timestamp) // "1718229989"
     * @endcode
     */
    static std::string birthdateByYear(int minYear = 1920, int maxYear = 2000, DateFormat dateFormat = DateFormat::ISO);

    /**
     * @brief Returns a name of random day of the week.
     *
     * @returns Name of the weekday.
     *
     * @code
     * Date::weekdayName() // "Monday"
     * @endcode
     */
    static std::string weekdayName();

    /**
     * @brief Returns an abbreviated name of random day of the week.
     *
     * @returns Abbreviated name of the weekday.
     *
     * @code
     * Date::weekdayAbbreviatedName() // "Mon"
     * @endcode
     */
    static std::string weekdayAbbreviatedName();

    /**
     * @brief Returns a random name of a month.
     *
     * @returns Name of the month.
     *
     * @code
     * Date::monthName() // "October"
     * @endcode
     */
    static std::string monthName();

    /**
     * @brief Returns an abbreviated name of random month.
     *
     * @returns Abbreviated name of the month.
     *
     * @code
     * Date::monthAbbreviatedName() // "Feb"
     * @endcode
     */
    static std::string monthAbbreviatedName();

    static unsigned int year(int minYear = 1800, int maxYear = 2000);
    /**
     * @brief Returns a random year in the specified range
     *
     * @param minYear Minimum year for the generated year values Defaults to '1800'.
     * @param maxYear Maximum year for the generated year values. Defaults to '2000'.
     *
     * @return Random year in specified range
     *
     * @code
     * (requires inclusion of time.h)
     * srand(time(NULL)) or srand(time(&timer))
     * int yearRange = (rand() % (maxYear-minYear)) + 1
     * return (unsigned int)(minYear + yearRange)
     * @endcode
     */
    static unsigned int month();
    /**
     * @brief Returns a rondom month between 1 and 12
     *
     * @return Number from 1-12 representing the month
     *
     * @code
     * (requires inclusion of time.h)
     * unsigned int randomMonth = (rand() % 12) + 1
     * return randomMonth
     * @endcode
     */
    static unsigned int hour();
    /**
     * @brief Returns a random hour (between 0-23)
     *
     * @return Random hour
     *
     * @code
     * (requires inclusion of time.h)
     * unsigned int randomHour = (rand() % 24)
     * return randomHour
     * @endcode
     */
    static unsigned int minutes();
    /**
     * @brief Returns a random minute (between 0-59)
     *
     * @return Random minute
     *
     * @code
     * (requires inclusion of time.h)
     * unsigned int randomMinute = rand() % 60
     * return randomMinute
     * @endcode
     */
    static unsigned int seconds();
    /**
     * @brief Returns a random second (0-59)
     *
     * @return Random second
     *
     * @code
     * (requires inclusion of time.h)
     * unsigned int randomSecond = rand() % 60
     * return randomSecond
     * @endcode
     */

    static std::string time();
    /**
     * @brief Returns a random time (e.g: 10:30)
     *
     * @return Random time
     *
     * @code
     * std::string time = ""
     * time += (std::string)Date::hour() // "7"
     * time += ":"
     * time += (std::string)Date::minutes() // "23"
     * return time
     * @endcode
     */
    static unsigned int dayOfMonth();
    /**
     * @brief Returns a number between 1 and 31 representing the day of the month
     *
     * @return Number from 1-31
     *
     * @code
     * (requires inclusion of time.h)
     * unsigned int randomDayOfMonth = (rand() % 30) + 1
     * return randomDayOfMonth
     * @endcode
     */
    static unsigned int dayOfWeek();
    /**
     * @brief Returns a number from 1 to 7 representing a day of the week
     *
     * @return Number from 1-7
     *
     * @code
     * (requires inclusion of time.h)
     * unsigned int randomDayOfWeek = (rand() % 7) + 1
     * return randomDayOfWeek
     * @endcode
     */
    static std::string timezone();
    /**
     *  @brief Returns a random timezone
     *
     *  @return Timezone
     *
     *  @code
     *
     *  @endcode
     */
};
}
