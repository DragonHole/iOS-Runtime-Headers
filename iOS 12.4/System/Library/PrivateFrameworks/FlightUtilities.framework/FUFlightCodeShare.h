/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class FUAirline;

@interface FUFlightCodeShare : NSObject <NSSecureCoding> {

	FUAirline* _airline;
	unsigned long long _flightNumber;

}

@property (retain) FUAirline * airline;                          //@synthesize airline=_airline - In the implementation block
@property (assign) unsigned long long flightNumber;              //@synthesize flightNumber=_flightNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setFlightNumber:(unsigned long long)arg1 ;
-(unsigned long long)flightNumber;
-(void)setAirline:(FUAirline *)arg1 ;
-(FUAirline *)airline;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

