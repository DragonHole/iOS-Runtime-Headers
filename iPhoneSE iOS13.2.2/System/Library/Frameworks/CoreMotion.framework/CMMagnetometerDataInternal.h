/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CMMagnetometerDataInternal : NSObject <NSCopying> {

	SCD_Struct_CM1 fMagneticField;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMagneticField:(SCD_Struct_CM1)arg1 ;
-(id)initWithMagneticField:(SCD_Struct_CM1)arg1 ;
@end

