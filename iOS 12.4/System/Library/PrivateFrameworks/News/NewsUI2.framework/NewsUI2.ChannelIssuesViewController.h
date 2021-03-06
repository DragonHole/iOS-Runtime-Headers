/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/News/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TUPluggable.h>

@interface NewsUI2.ChannelIssuesViewController : UIViewController <TUPluggable> {

	 styler;
	 eventHandler;
	 blueprintViewController;
	 gradientView;
	 offlineAlertControllerFactory;
	 isBeingUsedAsPlugin;
	 pluggableDelegate;
	 config;

}

@property (assign,nonatomic) BOOL isBeingUsedAsPlugin; 
@property (assign,__weak,nonatomic) id<TUPluggableDelegate> pluggableDelegate; 
-(void)initializeWithCompletion:(/*^block*/id)arg1 ;
-(void)relayoutWithCompletion:(/*^block*/id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)isBeingUsedAsPlugin;
-(void)setIsBeingUsedAsPlugin:(BOOL)arg1 ;
-(id<TUPluggableDelegate>)pluggableDelegate;
-(void)setPluggableDelegate:(id<TUPluggableDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

