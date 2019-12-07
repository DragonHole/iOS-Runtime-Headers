/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>

@interface MCUINavigationViewController : UINavigationController {

	/*^block*/id _showViewControllerCompletionBlock;

}

@property (nonatomic,copy) id showViewControllerCompletionBlock;              //@synthesize showViewControllerCompletionBlock=_showViewControllerCompletionBlock - In the implementation block
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)setShowViewControllerCompletionBlock:(id)arg1 ;
-(id)showViewControllerCompletionBlock;
@end
