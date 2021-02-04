/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <Foundation/NSValue.h>

@interface CMTimeRangeAsValue : NSValue {

	SCD_Struct_AV6 _timeRange;

}
+(id)valueWithCMTimeRange:(SCD_Struct_AV6)arg1 ;
+(BOOL)supportsSecureCoding;
-(SCD_Struct_AV6)CMTimeRangeValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToValue:(id)arg1 ;
-(const char*)objCType;
-(Class)classForCoder;
-(void)getValue:(void*)arg1 ;
@end
