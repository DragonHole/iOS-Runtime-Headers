/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FlightUtilities/FUFlightFactory.h>
#import <libobjc.A.dylib/FUFlightFactoryInternalProtocol.h>

@class NSString;

@interface FUFlightFactory_Parsec : FUFlightFactory <FUFlightFactoryInternalProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)convertFlightModel:(id)arg1 withError:(id*)arg2 ;
+(void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 userAgent:(id)arg5 sessionID:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
+(void)loadFlightStructuresWithFlightNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 userAgent:(id)arg5 sessionID:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
+(void)extractTimeForFlightStep:(id)arg1 fromLeg:(id)arg2 ;
+(id)airportFromSFAirport:(id)arg1 ;
@end

