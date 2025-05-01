# Adoption of communication technologies - Data package

This data package contains the data that powers the chart ["Adoption of communication technologies"](https://ourworldindata.org/grapher/ict-adoption?v=1&csvType=full&useColumnShortNames=false) on the Our World in Data website.

## CSV Structure

The high level structure of the CSV file is that each row is an observation for an entity (usually a country or region) and a timepoint (usually a year).

The first two columns in the CSV file are "Entity" and "Code". "Entity" is the name of the entity (e.g. "United States"). "Code" is the OWID internal entity code that we use if the entity is a country or region. For normal countries, this is the same as the [iso alpha-3](https://en.wikipedia.org/wiki/ISO_3166-1_alpha-3) code of the entity (e.g. "USA") - for non-standard countries like historical countries these are custom codes.

The third column is either "Year" or "Day". If the data is annual, this is "Year" and contains only the year as an integer. If the column is "Day", the column contains a date string in the form "YYYY-MM-DD".

The remaining columns are the data columns, each of which is a time series. If the CSV data is downloaded using the "full data" option, then each column corresponds to one time series below. If the CSV data is downloaded using the "only selected data visible in the chart" option then the data columns are transformed depending on the chart type and thus the association with the time series might not be as straightforward.

## Metadata.json structure

The .metadata.json file contains metadata about the data package. The "charts" key contains information to recreate the chart, like the title, subtitle etc.. The "columns" key contains information about each of the columns in the csv, like the unit, timespan covered, citation for the data etc..

## About the data

Our World in Data is almost never the original producer of the data - almost all of the data we use has been compiled by others. If you want to re-use data, it is your responsibility to ensure that you adhere to the sources' license and to credit them correctly. Please note that a single time series may have more than one source - e.g. when we stich together data from different time periods by different producers or when we calculate per capita metrics using population data from a second source.

### How we process data at Our World In Data
All data and visualizations on Our World in Data rely on data sourced from one or several original data providers. Preparing this original data involves several processing steps. Depending on the data, this can include standardizing country names and world region definitions, converting units, calculating derived indicators such as per capita measures, as well as adding or adapting metadata such as the name or the description given to an indicator.
[Read about our data pipeline](https://docs.owid.io/projects/etl/)

## Detailed information about each time series


## Landline phone subscriptions
Last updated: January 24, 2025  
Next update: January 2026  
Date range: 1960–2023  


### How to cite this data

#### In-line citation
If you have limited space (e.g. in data visualizations), you can use this abbreviated in-line citation:  
International Telecommunication Union (via World Bank) (2025) – processed by Our World in Data

#### Full citation
International Telecommunication Union (via World Bank) (2025) – processed by Our World in Data. “Landline phone subscriptions” [dataset]. International Telecommunication Union (via World Bank), “World Development Indicators” [original data].
Source: International Telecommunication Union (via World Bank) (2025) – processed by Our World In Data

### How is this data described by its producer - International Telecommunication Union (via World Bank) (2025)?
Fixed telephone subscriptions refers to the sum of active number of analogue fixed telephone lines, voice-over-IP (VoIP) subscriptions, fixed wireless local loop (WLL) subscriptions, ISDN voice-channel equivalents and fixed public payphones.

Limitations and exceptions: Operators have traditionally been the main source of telecommunications data, so information on subscriptions has been widely available for most countries. This gives a general idea of access, but a more precise measure is the penetration rate - the share of households with access to telecommunications. During the past few years more information on information and communication technology use has become available from household and business surveys. Also important are data on actual use of telecommunications services. Ideally, statistics on telecommunications (and other information and communications technologies) should be compiled for all three measures: subscriptions, access, and use. The quality of data varies among reporting countries as a result of differences in regulations covering data provision and availability.

Discrepancies between global and national figures may arise when countries use a different definition than the one used by ITU. For example, some countries do not include the number of ISDN channels when calculating the number of fixed telephone lines. Discrepancies may also arise in cases where the end of a fiscal year differs from that used by ITU, which is the end of December of every year. A number of countries have fiscal years that end in March or June of every year. Data are usually not adjusted but discrepancies in the definition, reference year or the break in comparability in between years are noted in a data note. For this reason, data are not always strictly comparable. Missing values are estimated by ITU.

Statistical concept and methodology: A fixed telephone line (previously called main telephone line in operation) is an active line connecting the subscriber's terminal equipment to the public switched telephone network (PSTN) and which has a dedicated port in the telephone exchange equipment. This term is synonymous with the terms main station or Direct Exchange Line (DEL) that are commonly used in telecommunication documents. It may not be the same as an access line or a subscriber. This should include the active number of analog fixed telephone lines, ISDN channels, fixed wireless, public payphones and VoIP subscriptions. Active lines are those that have registered an activity in the past three months.

Data on fixed telephone lines are derived using administrative data that countries (usually the regulatory telecommunication authority or the Ministry in charge of telecommunications) regularly, and at least annually, collect from telecommunications operators. Data are considered to be very reliable, timely, and complete.

Data for this indicator are readily available for approximately 90 percent of countries, either through ITU's World Telecommunication Indicators questionnaires or from official information available on the Ministry or Regulator's website. For the rest, information can be aggregated through operators' data (mainly through annual reports) and complemented by market research reports. For additional/latest information on sources and country notes, please also refer to: https://www.itu.int/en/ITU-D/Statistics/Pages/stat/default.aspx

### Source

#### International Telecommunication Union (via World Bank) – World Development Indicators
Retrieved on: 2025-01-24  
Retrieved from: https://datacatalog.worldbank.org/search/dataset/0037712/World-Development-Indicators  


## Landline Internet subscriptions
Last updated: January 24, 2025  
Next update: January 2026  
Date range: 1998–2023  


### How to cite this data

#### In-line citation
If you have limited space (e.g. in data visualizations), you can use this abbreviated in-line citation:  
International Telecommunication Union (via World Bank) (2025) – processed by Our World in Data

#### Full citation
International Telecommunication Union (via World Bank) (2025) – processed by Our World in Data. “Landline Internet subscriptions” [dataset]. International Telecommunication Union (via World Bank), “World Development Indicators” [original data].
Source: International Telecommunication Union (via World Bank) (2025) – processed by Our World In Data

### How is this data described by its producer - International Telecommunication Union (via World Bank) (2025)?
Fixed broadband subscriptions refers to fixed subscriptions to high-speed access to the public Internet (a TCP/IP connection), at downstream speeds equal to, or greater than, 256 kbit/s. This includes cable modem, DSL, fiber-to-the-home/building, other fixed (wired)-broadband subscriptions, satellite broadband and terrestrial fixed wireless broadband. This total is measured irrespective of the method of payment. It excludes subscriptions that have access to data communications (including the Internet) via mobile-cellular networks. It should include fixed WiMAX and any other fixed wireless technologies. It includes both residential subscriptions and subscriptions for organizations.

### Source

#### International Telecommunication Union (via World Bank) – World Development Indicators
Retrieved on: 2025-01-24  
Retrieved from: https://datacatalog.worldbank.org/search/dataset/0037712/World-Development-Indicators  


## Mobile phone subscriptions
Last updated: January 24, 2025  
Next update: January 2026  
Date range: 1960–2023  


### How to cite this data

#### In-line citation
If you have limited space (e.g. in data visualizations), you can use this abbreviated in-line citation:  
International Telecommunication Union (via World Bank) (2025) – processed by Our World in Data

#### Full citation
International Telecommunication Union (via World Bank) (2025) – processed by Our World in Data. “Mobile phone subscriptions” [dataset]. International Telecommunication Union (via World Bank), “World Development Indicators” [original data].
Source: International Telecommunication Union (via World Bank) (2025) – processed by Our World In Data

### How is this data described by its producer - International Telecommunication Union (via World Bank) (2025)?
Mobile cellular telephone subscriptions are subscriptions to a public mobile telephone service that provide access to the PSTN using cellular technology. The indicator includes (and is split into) the number of postpaid subscriptions, and the number of active prepaid accounts (i.e. that have been used during the last three months). The indicator applies to all mobile cellular subscriptions that offer voice communications. It excludes subscriptions via data cards or USB modems, subscriptions to public mobile data services, private trunked mobile radio, telepoint, radio paging and telemetry services.

Limitations and exceptions: Operators have traditionally been the main source of telecommunications data, so information on subscriptions has been widely available for most countries. This gives a general idea of access, but a more precise measure is the penetration rate - the share of households with access to telecommunications. During the past few years more information on information and communication technology use has become available from household and business surveys. Also important are data on actual use of telecommunications services. Ideally, statistics on telecommunications (and other information and communications technologies) should be compiled for all three measures: subscriptions, access, and use. The quality of data varies among reporting countries as a result of differences in regulations covering data provision and availability.

Discrepancies between global and national figures may arise when countries use a different definition than the one used by ITU. For example, some countries do not include the number of ISDN channels when calculating the number of fixed telephone lines. Discrepancies may also arise in cases where the end of a fiscal year differs from that used by ITU, which is the end of December of every year. A number of countries have fiscal years that end in March or June of every year. Data are usually not adjusted but discrepancies in the definition, reference year or the break in comparability in between years are noted in a data note. For this reason, data are not always strictly comparable. Missing values are estimated by ITU.

Mobile subscriptions include both analogue and digital cellular systems (IMT-2000 (Third Generation, 3G) and 4G subscriptions, but excludes mobile broadband subscriptions via data cards or USB modems. Subscriptions to public mobile data services, private trunked mobile radio, telepoint or radio paging, and telemetry services are also excluded, but all mobile cellular subscriptions that offer voice communications are included. Both postpaid and prepaid subscriptions are included.

Statistical concept and methodology: Refers to the subscriptions to a public mobile telephone service and provides access to Public Switched Telephone Network (PSTN) using cellular technology, including number of pre-paid SIM cards active during the past three months. This includes both analogue and digital cellular systems (IMT-2000 (Third Generation, 3G) and 4G subscriptions, but excludes mobile broadband subscriptions via data cards or USB modems. Subscriptions to public mobile data services, private trunked mobile radio, telepoint or radio paging, and telemetry services should also be excluded. This should include all mobile cellular subscriptions that offer voice communications.

Data on mobile cellular subscribers are derived using administrative data that countries (usually the regulatory telecommunication authority or the Ministry in charge of telecommunications) regularly, and at least annually, collect from telecommunications operators.

Data for this indicator are readily available for approximately 90 percent of countries, either through ITU's World Telecommunication Indicators questionnaires or from official information available on the Ministry or Regulator's website. For the rest, information can be aggregated through operators' data (mainly through annual reports) and complemented by market research reports. For additional/latest information on sources and country notes, please also refer to: https://www.itu.int/en/ITU-D/Statistics/Pages/stat/default.aspx

### Source

#### International Telecommunication Union (via World Bank) – World Development Indicators
Retrieved on: 2025-01-24  
Retrieved from: https://datacatalog.worldbank.org/search/dataset/0037712/World-Development-Indicators  


## Internet users
The number of individuals using the Internet.
Last updated: December 23, 2024  
Next update: December 2025  
Date range: 1960–2021  
Unit: users  


### How to cite this data

#### In-line citation
If you have limited space (e.g. in data visualizations), you can use this abbreviated in-line citation:  
HYDE (2023); Gapminder (2022); UN WPP (2024) – with major processing by Our World in Data

#### Full citation
HYDE (2023); Gapminder (2022); UN WPP (2024) – with major processing by Our World in Data. “Internet users” [dataset]. International Telecommunication Union (via World Bank), “World Development Indicators”; Various sources, “Population” [original data].
Source: HYDE (2023); Gapminder (2022); UN WPP (2024) – with major processing by Our World In Data

### Sources

#### International Telecommunication Union (via World Bank) – World Development Indicators
Retrieved on: 2024-05-20  
Retrieved from: https://datacatalog.worldbank.org/search/dataset/0037712/World-Development-Indicators  

#### Various sources – Population
Retrieved on: 2024-07-11  
Retrieved from: https://ourworldindata.org/population-sources  

#### Notes on our processing step for this indicator
The number of internet users is calculated by Our World in Data based on internet access figures as a share of the total population, published in the World Development Indicators by the World Bank and total population figures from the UN World Population Prospects, Gapminder and HYDE."


    