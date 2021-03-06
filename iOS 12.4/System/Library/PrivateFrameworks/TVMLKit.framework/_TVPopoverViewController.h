/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class _TVPopoverDescriptor, NSArray, UIBarButtonItem, UITableView, NSString;

@interface _TVPopoverViewController : _TVBgImageLoadingViewController <UITableViewDelegate, UITableViewDataSource> {

	BOOL _ignoreDismissalOnExpansionOrContraction;
	_TVPopoverDescriptor* _popoverDescriptor;
	long long _expandedRow;
	NSArray* _popoverEntries;
	UIBarButtonItem* _cancelButtonItem;

}

@property (assign,nonatomic) long long expandedRow;                                   //@synthesize expandedRow=_expandedRow - In the implementation block
@property (nonatomic,copy) NSArray * popoverEntries;                                  //@synthesize popoverEntries=_popoverEntries - In the implementation block
@property (nonatomic,readonly) UITableView * tableView; 
@property (nonatomic,readonly) UIBarButtonItem * cancelButtonItem;                    //@synthesize cancelButtonItem=_cancelButtonItem - In the implementation block
@property (nonatomic,readonly) CGSize calculatedPreferredContentSize; 
@property (nonatomic,readonly) _TVPopoverDescriptor * popoverDescriptor;              //@synthesize popoverDescriptor=_popoverDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithViewElement:(id)arg1 ;
-(UIBarButtonItem *)cancelButtonItem;
-(id)init;
-(void)dealloc;
-(UITableView *)tableView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)_updatePreferredContentSize;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(void)_cancelButtonTouchUpInside:(id)arg1 ;
-(void)setExpandedRow:(long long)arg1 ;
-(CGSize)calculatedPreferredContentSize;
-(id)_modalPresenterPresentedViewController;
-(void)_dismissViewControllerAnimated:(BOOL)arg1 ;
-(NSArray *)popoverEntries;
-(double)_heightForOptionAtRow:(unsigned long long)arg1 ;
-(void)setPopoverEntries:(NSArray *)arg1 ;
-(long long)expandedRow;
-(_TVPopoverDescriptor *)popoverDescriptor;
@end

