/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView, SearchUIDetailedRowModel;


@protocol SearchUIDetailedRowComponent <NSObject>
@property (nonatomic,retain) UIView * view; 
@property (nonatomic,retain) SearchUIDetailedRowModel * rowModel; 
@property (assign,nonatomic,__weak) id<SearchUIFeedbackDelegate> feedbackDelegate; 
@required
+(BOOL)supportsRowModel:(id)arg1;
-(UIView *)view;
-(void)setView:(id)arg1;
-(void)updateWithContacts:(id)arg1;
-(id)setupView;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(SearchUIDetailedRowModel *)rowModel;
-(void)updateWithRowModel:(id)arg1;
-(BOOL)shouldVerticallyCenter;
-(void)setRowModel:(id)arg1;
-(void)setFeedbackDelegate:(id)arg1;

@end

