/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKBrowserCell.h>

@class CKAppInstallation, CKBrowserIconView;

@interface CKBrowserAppInstallCell : CKBrowserCell {

	CKAppInstallation* _installation;
	CKBrowserIconView* _browserIconView;

}

@property (nonatomic,retain) CKBrowserIconView * browserIconView;              //@synthesize browserIconView=_browserIconView - In the implementation block
@property (nonatomic,retain) CKAppInstallation * installation;                 //@synthesize installation=_installation - In the implementation block
+(id)reuseIdentifier;
-(void)layoutSubviews;
-(id)iconView;
-(void)setInstallation:(CKAppInstallation *)arg1 ;
-(CKBrowserIconView *)browserIconView;
-(void)setBrowserIconView:(CKBrowserIconView *)arg1 ;
-(CKAppInstallation *)installation;
@end
