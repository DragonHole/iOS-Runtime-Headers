/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUJSProxy.h>
#import <libobjc.A.dylib/NUJSVideoPropertiesExport.h>

@interface NUJSVideoProperties : NUJSProxy <NUJSVideoPropertiesExport>

@property (readonly) id<NUVideoProperties> videoProperties; 
@property (readonly) CGRect cleanAperture; 
@property (readonly) CGRect originalCleanAperture; 
@property (readonly) CGSize originalSize; 
-(CGSize)originalSize;
-(id<NUVideoProperties>)videoProperties;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(CGRect)cleanAperture;
-(BOOL)containsMetadata:(id)arg1 ;
-(CGRect)originalCleanAperture;
-(id)initWithVideoProperties:(id)arg1 context:(id)arg2 ;
@end

