/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUScalePolicy.h>

@class NSString;

@interface NUFitScalePolicy : NSObject <NUScalePolicy> {

	SCD_Struct_NU5 _size;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTargetSize:(CGSize)arg1 ;
-(SCD_Struct_NU5)scaleForImageSize:(SCD_Struct_NU5)arg1 ;
-(id)initWithTargetPixelSize:(SCD_Struct_NU5)arg1 ;
-(id)init;
-(NSString *)description;
@end

