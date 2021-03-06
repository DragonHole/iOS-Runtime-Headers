/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface GEOPNRStringsFileReaderResult : NSObject {

	NSString* _country;
	NSString* _region;
	NSString* _city;

}

@property (nonatomic,retain) NSString * country;              //@synthesize country=_country - In the implementation block
@property (nonatomic,retain) NSString * region;               //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) NSString * city;                 //@synthesize city=_city - In the implementation block
@property (nonatomic,readonly) long long score; 
+(long long)maxPossibleScore;
-(NSString *)country;
-(NSString *)city;
-(BOOL)shouldOrderCityFirstForLanguage:(id)arg1 phoneNumberInCC:(id)arg2 ;
-(id)separatorForLanguage:(id)arg1 ;
-(id)initWithCountry:(id)arg1 region:(id)arg2 city:(id)arg3 ;
-(BOOL)isEqualTo:(id)arg1 ;
-(id)aggregateStringWhileInCountry:(id)arg1 forLanguage:(id)arg2 ccOfNumber:(id)arg3 ;
-(BOOL)isPlaceHolderForEmpty;
-(void)setCountry:(NSString *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
-(long long)score;
-(void)setRegion:(NSString *)arg1 ;
-(NSString *)region;
@end

