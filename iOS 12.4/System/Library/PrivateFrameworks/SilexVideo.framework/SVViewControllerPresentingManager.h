/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/SVViewControllerPresenting.h>

@protocol SVModalPresentationViewControllerProviding;
@class NSString;

@interface SVViewControllerPresentingManager : NSObject <SVViewControllerPresenting> {

	id<SVModalPresentationViewControllerProviding> _modalPresentationViewControllerProvider;

}

@property (nonatomic,readonly) id<SVModalPresentationViewControllerProviding> modalPresentationViewControllerProvider;              //@synthesize modalPresentationViewControllerProvider=_modalPresentationViewControllerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(id<SVModalPresentationViewControllerProviding>)modalPresentationViewControllerProvider;
-(id)initWithModalPresentationViewControllerProvider:(id)arg1 ;
@end

