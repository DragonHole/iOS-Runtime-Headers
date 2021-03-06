/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIStatusBar, NSString;

@interface SBStatusBarContainer : NSObject {

	UIStatusBar* _statusBar;
	NSString* _reason;

}

@property (assign,nonatomic,__weak) UIStatusBar * statusBar;              //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,retain) NSString * reason;                           //@synthesize reason=_reason - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(UIStatusBar *)statusBar;
-(void)setStatusBar:(UIStatusBar *)arg1 ;
@end

