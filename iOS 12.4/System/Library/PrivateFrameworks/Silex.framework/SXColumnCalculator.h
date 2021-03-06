/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXColumnCalculator.h>

@protocol SXColumnCalculator <NSObject>
@required
-(id)columnLayoutWithViewportSize:(CGSize)arg1 constrainedToWidth:(double)arg2 documentLayout:(id)arg3;
-(id)columnLayoutWithConstrainedViewportSize:(CGSize)arg1 viewportSize:(CGSize)arg2 additionalMargins:(double)arg3 documentLayout:(id)arg4;

@end


@class NSString;

@interface SXColumnCalculator : NSObject <SXColumnCalculator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)columnLayoutWithViewportSize:(CGSize)arg1 constrainedToWidth:(double)arg2 documentLayout:(id)arg3 ;
-(id)columnLayoutWithConstrainedViewportSize:(CGSize)arg1 viewportSize:(CGSize)arg2 additionalMargins:(double)arg3 documentLayout:(id)arg4 ;
@end

