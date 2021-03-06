/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FMCore/FMCore-Structs.h>
@class NSDate, NSError;

@interface FMLocationShifterItem : NSObject {

	BOOL _shifted;
	double _accuracy;
	NSDate* _timestamp;
	id _context;
	NSError* _error;
	CLLocationCoordinate2D _coordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) double accuracy;                                //@synthesize accuracy=_accuracy - In the implementation block
@property (assign,nonatomic) BOOL shifted;                                   //@synthesize shifted=_shifted - In the implementation block
@property (nonatomic,retain) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) id context;                                   //@synthesize context=_context - In the implementation block
-(CLLocationCoordinate2D)coordinate;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(double)accuracy;
-(void)setAccuracy:(double)arg1 ;
-(BOOL)shifted;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 accuracy:(double)arg2 timestamp:(id)arg3 context:(id)arg4 ;
-(void)setShifted:(BOOL)arg1 ;
-(id)init;
-(id)description;
-(id)context;
-(NSDate *)timestamp;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

