/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIActivityViewController.h>

@protocol DOCServicePopoverTrackerProtocol;
@class UIBarButtonItem;

@interface DOCDocBrowserVC_UIActivityViewController : UIActivityViewController {

	id<DOCServicePopoverTrackerProtocol> _popoverTracker;
	UIBarButtonItem* _barButtonItem;

}

@property (retain) id<DOCServicePopoverTrackerProtocol> popoverTracker;              //@synthesize popoverTracker=_popoverTracker - In the implementation block
@property (__weak) UIBarButtonItem * barButtonItem;                                  //@synthesize barButtonItem=_barButtonItem - In the implementation block
-(id<DOCServicePopoverTrackerProtocol>)popoverTracker;
-(void)setPopoverTracker:(id<DOCServicePopoverTrackerProtocol>)arg1 ;
-(UIBarButtonItem *)barButtonItem;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
@end

