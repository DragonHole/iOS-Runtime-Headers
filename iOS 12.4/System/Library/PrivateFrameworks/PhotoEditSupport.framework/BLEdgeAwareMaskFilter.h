/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIFilter;

@interface BLEdgeAwareMaskFilter : CIFilter {

	float* _cubeData;
	SCD_Struct_BL9 _currentInputColor;
	CIFilter* _ciColorCubeFilter;
	SCD_Struct_BL9 _inputColor;

}

@property (assign) SCD_Struct_BL9 inputColor;              //@synthesize inputColor=_inputColor - In the implementation block
-(void)setInputImage:(id)arg1 ;
-(BOOL)isDataUpToDate;
-(void)labFromRed:(float)arg1 green:(float)arg2 blue:(float)arg3 lunminance:(float*)arg4 a:(float*)arg5 b:(float*)arg6 ;
-(unsigned long long)dataLength;
-(id)cubeData;
-(id)init;
-(void)dealloc;
-(SCD_Struct_BL9)inputColor;
-(void)setInputColor:(SCD_Struct_BL9)arg1 ;
-(id)outputImage;
@end
