/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface CLVehicleHeading : NSObject <NSCopying, NSSecureCoding> {

	id _internal;

}

@property (nonatomic,readonly) double trueHeading; 
@property (nonatomic,readonly) NSDate * timestamp; 
+(BOOL)supportsSecureCoding;
-(id)initWithClientVehicleHeading:(SCD_Struct_CL2)arg1 ;
-(double)trueHeading;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)timestamp;
-(id)shortDescription;
@end

