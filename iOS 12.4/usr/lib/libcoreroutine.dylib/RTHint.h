/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLLocation, NSDate;

@interface RTHint : NSObject {

	CLLocation* _location;
	long long _source;
	NSDate* _date;

}

@property (nonatomic,retain) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) long long source;                   //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSDate * date;                    //@synthesize date=_date - In the implementation block
+(id)hintSourceToString:(long long)arg1 ;
-(id)initWithLocation:(id)arg1 source:(long long)arg2 date:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)date;
-(void)setSource:(long long)arg1 ;
-(long long)source;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
@end

