/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, WFLocation, NSString;

@interface WFWeatherDataServiceParserMetadataV1 : NSObject {

	NSDate* _readTime;
	NSDate* _expireTime;
	unsigned long long _version;
	WFLocation* _location;
	NSString* _language;

}

@property (nonatomic,retain) NSDate * readTime;                       //@synthesize readTime=_readTime - In the implementation block
@property (nonatomic,retain) NSDate * expireTime;                     //@synthesize expireTime=_expireTime - In the implementation block
@property (assign,nonatomic) unsigned long long version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) WFLocation * location;                   //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSString * language;                     //@synthesize language=_language - In the implementation block
-(unsigned long long)version;
-(void)setVersion:(unsigned long long)arg1 ;
-(WFLocation *)location;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setLocation:(WFLocation *)arg1 ;
-(NSDate *)readTime;
-(void)setReadTime:(NSDate *)arg1 ;
-(NSDate *)expireTime;
-(void)setExpireTime:(NSDate *)arg1 ;
@end

