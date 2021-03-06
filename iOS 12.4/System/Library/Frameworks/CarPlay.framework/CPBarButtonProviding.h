/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, CPBarButton;


@protocol CPBarButtonProviding <NSObject>
@property (nonatomic,retain) NSArray * leadingNavigationBarButtons; 
@property (nonatomic,retain) NSArray * trailingNavigationBarButtons; 
@property (nonatomic,retain) CPBarButton * backButton; 
@required
-(NSArray *)leadingNavigationBarButtons;
-(NSArray *)trailingNavigationBarButtons;
-(void)setLeadingNavigationBarButtons:(id)arg1;
-(void)setTrailingNavigationBarButtons:(id)arg1;
-(CPBarButton *)backButton;
-(void)setBackButton:(id)arg1;

@end

