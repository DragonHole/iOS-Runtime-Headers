/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage;

@interface HKFillStyle : NSObject <NSCopying> {

	UIImage* _cachedImage;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clearCache;
-(void)_renderCacheIfNecessaryForHeight:(double)arg1 usingTraitCollection:(id)arg2 ;
-(void)_renderCacheIfNecessaryForWidth:(double)arg1 usingTraitCollection:(id)arg2 ;
-(void)_renderCacheIfNecessaryForSize:(CGSize)arg1 usingTraitCollection:(id)arg2 ;
-(BOOL)_needsRenderForSize:(CGSize)arg1 ;
-(void)_renderInContext:(CGContextRef)arg1 size:(CGSize)arg2 ;
-(id)fillImageWithHeight:(double)arg1 usingTraitCollection:(id)arg2 ;
-(id)fillImageWithWidth:(double)arg1 usingTraitCollection:(id)arg2 ;
@end

