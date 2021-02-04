/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKImageElement, IKViewElement;

@interface _TVLoadingViewController : _TVBgImageLoadingViewController {

	IKImageElement* _bgImageElement;
	IKImageElement* _heroImgElement;
	IKViewElement* _loadingTemplateElement;
	double _spinnerDelay;

}
-(CGSize)_backgroundImageProxySize;
-(void)updateWithLoadingTemplate:(id)arg1 ;
-(id)_backgroundImageProxy;
-(BOOL)_backgroundImageRequiresBlur;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(void)setSpinnerDelay:(double)arg1 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)_blurEffectStyle;
-(void)updateWithViewElement:(id)arg1 ;
@end
