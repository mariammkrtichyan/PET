# Share of the population with access to electricity - Data package

This data package contains the data that powers the chart ["Share of the population with access to electricity"](https://ourworldindata.org/grapher/share-of-the-population-with-access-to-electricity?v=1&csvType=full&useColumnShortNames=false) on the Our World in Data website. It was downloaded on February 19, 2025.

### Active Filters

A filtered subset of the full data was downloaded. The following filters were applied:

## CSV Structure

The high level structure of the CSV file is that each row is an observation for an entity (usually a country or region) and a timepoint (usually a year).

The first two columns in the CSV file are "Entity" and "Code". "Entity" is the name of the entity (e.g. "United States"). "Code" is the OWID internal entity code that we use if the entity is a country or region. For normal countries, this is the same as the [iso alpha-3](https://en.wikipedia.org/wiki/ISO_3166-1_alpha-3) code of the entity (e.g. "USA") - for non-standard countries like historical countries these are custom codes.

The third column is either "Year" or "Day". If the data is annual, this is "Year" and contains only the year as an integer. If the column is "Day", the column contains a date string in the form "YYYY-MM-DD".

The final column is the data column, which is the time series that powers the chart. If the CSV data is downloaded using the "full data" option, then the column corresponds to the time series below. If the CSV data is downloaded using the "only selected data visible in the chart" option then the data column is transformed depending on the chart type and thus the association with the time series might not be as straightforward.

## Metadata.json structure

The .metadata.json file contains metadata about the data package. The "charts" key contains information to recreate the chart, like the title, subtitle etc.. The "columns" key contains information about each of the columns in the csv, like the unit, timespan covered, citation for the data etc..

## About the data

Our World in Data is almost never the original producer of the data - almost all of the data we use has been compiled by others. If you want to re-use data, it is your responsibility to ensure that you adhere to the sources' license and to credit them correctly. Please note that a single time series may have more than one source - e.g. when we stich together data from different time periods by different producers or when we calculate per capita metrics using population data from a second source.

## Detailed information about the data


## Share of the population with access to electricity – World Bank
Having access to electricity is defined in international statistics as having an electricity source that can provide very basic lighting, and charge a phone or power a radio for 4 hours per day.
Last updated: January 24, 2025  
Next update: January 2026  
Date range: 1990–2022  
Unit: % of population  


### How to cite this data

#### In-line citation
If you have limited space (e.g. in data visualizations), you can use this abbreviated in-line citation:  
Data compiled from multiple sources by World Bank – with minor processing by Our World in Data

#### Full citation
Data compiled from multiple sources by World Bank – with minor processing by Our World in Data. “Share of the population with access to electricity – World Bank” [dataset]. World Bank and International Energy Agency, “World Development Indicators” [original data].
Source: Data compiled from multiple sources by World Bank – with minor processing by Our World In Data

### How is this data described by its producer - Data compiled from multiple sources by World Bank?
Electrification data are collected from industry, national surveys and international sources.

Statistical concept and methodology: Data for access to electricity are collected among different sources: mostly data from nationally representative household surveys (including national censuses) were used. Survey sources include Demographic and Health Surveys (DHS) and Living Standards Measurement Surveys (LSMS), Multi-Indicator Cluster Surveys (MICS), the World Health Survey (WHS), other nationally developed and implemented surveys, and various government agencies (for example, ministries of energy and utilities). Given the low frequency and the regional distribution of some surveys, a number of countries have gaps in available data.

To develop the historical evolution and starting point of electrification rates, a simple modeling approach was adopted to fill in the missing data points - around 1990, around 2000, and around 2010. Therefore, a country can have a continuum of zero to three data points. There are 42 countries with zero data point and the weighted regional average was used as an estimate for electrification in each of the data periods. 170 countries have between one and three data points and missing data are estimated by using a model with region, country, and time variables. The model keeps the original observation if data is available for any of the time periods. This modeling approach allowed the estimation of electrification rates for 212 countries over these three time periods (Indicated as \"Estimate\"). Notation \"Assumption\" refers to the assumption of universal access in countries classified as developed by the United Nations. Data begins from the year in which the first survey data is available for each country.

### Source

#### World Bank and International Energy Agency – World Development Indicators
Retrieved on: 2025-01-24  
Retrieved from: https://datacatalog.worldbank.org/search/dataset/0037712/World-Development-Indicators  


    