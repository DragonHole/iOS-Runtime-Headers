/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSArray, UITableView, NSString;

@interface UIDebuggingInformationOverlayAutoLayoutTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	NSArray* _verticalConstraints;
	NSArray* _horizontalConstraints;
	UITableView* _tableView;

}

@property (nonatomic,retain) UITableView * tableView;                      //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSArray * verticalConstraints;                //@synthesize verticalConstraints=_verticalConstraints - In the implementation block
@property (nonatomic,retain) NSArray * horizontalConstraints;              //@synthesize horizontalConstraints=_horizontalConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(NSArray *)horizontalConstraints;
-(void)setHorizontalConstraints:(NSArray *)arg1 ;
-(NSArray *)verticalConstraints;
-(void)setVerticalConstraints:(NSArray *)arg1 ;
-(void)switchChanged:(id)arg1 ;
-(void)refresh;
@end

