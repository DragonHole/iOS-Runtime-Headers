/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MobileLookup.framework/MobileLookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@interface MLUBlurryView : UIView {

	BOOL _hasActivated;
	BOOL _shouldRasterizeForTransition;

}

@property (assign) double blurRadius; 
@property (assign,nonatomic) BOOL shouldRasterizeForTransition;              //@synthesize shouldRasterizeForTransition=_shouldRasterizeForTransition - In the implementation block
-(void)_activateBlurring;
-(void)setBlurRadius:(double)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(double)blurRadius;
-(void)setShouldRasterizeForTransition:(BOOL)arg1 ;
-(BOOL)shouldRasterizeForTransition;
@end

