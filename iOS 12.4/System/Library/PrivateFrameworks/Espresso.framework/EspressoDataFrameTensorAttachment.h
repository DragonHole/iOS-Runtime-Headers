/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Espresso/Espresso-Structs.h>
#import <Espresso/EspressoDataFrameAttachment.h>

@interface EspressoDataFrameTensorAttachment : EspressoDataFrameAttachment {

	SCD_Struct_Es2* buffer;

}
+(SCD_Struct_Es2*)copyFromCVPixelBuffer:(CVBufferRef)arg1 ;
-(void)loadFromDict:(id)arg1 frameStorage:(id)arg2 ;
-(SCD_Struct_Es2*)copyAsEspressoBuffer;
@end

