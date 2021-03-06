/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PreferenceBundles/MobileCalSettings.bundle/MobileCalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCalSettings/MobileCalSettings-Structs.h>
#import <UIKitCore/UITableView.h>

@protocol ListTableViewDelegate;
@class UILabel, UIWindow;

@interface ListTableView : UITableView {

	UILabel* _noContentView;
	BOOL _layoutOnJoiningViewHierarchy;
	UIWindow* _lastKnownWindow;
	id<ListTableViewDelegate> _listViewDelegate;

}

@property (assign,nonatomic,__weak) id<ListTableViewDelegate> listViewDelegate;              //@synthesize listViewDelegate=_listViewDelegate - In the implementation block
@property (assign,nonatomic) BOOL showsNoContentString; 
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(id<ListTableViewDelegate>)listViewDelegate;
-(void)setShowsNoContentString:(BOOL)arg1 ;
-(BOOL)showsNoContentString;
-(void)setListViewDelegate:(id<ListTableViewDelegate>)arg1 ;
@end

