/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol NURAWImageProperties <NSObject>
@property (readonly) NSString * decoderVersion; 
@property (readonly) NSArray * availableDecoderVersions; 
@property (readonly) double temperature; 
@property (readonly) double tint; 
@property (readonly) id<NURAWNoiseReductionProperties> noiseReductionProperties; 
@required
-(NSString *)decoderVersion;
-(id<NURAWNoiseReductionProperties>)noiseReductionProperties;
-(NSArray *)availableDecoderVersions;
-(double)temperature;
-(double)tint;

@end
