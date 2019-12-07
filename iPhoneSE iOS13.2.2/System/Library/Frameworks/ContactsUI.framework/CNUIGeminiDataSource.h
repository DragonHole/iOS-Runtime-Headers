/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNGeminiManagerDelegate.h>

@protocol CNUIGeminiDataSourceDelegate;
@class CNContact, CNGeminiResult, CNGeminiManager, NSString;

@interface CNUIGeminiDataSource : NSObject <CNGeminiManagerDelegate> {

	CNContact* _contact;
	CNGeminiResult* _geminiResult;
	id<CNUIGeminiDataSourceDelegate> _delegate;
	CNGeminiManager* _geminiManager;

}

@property (nonatomic,retain) CNGeminiManager * geminiManager;                               //@synthesize geminiManager=_geminiManager - In the implementation block
@property (nonatomic,retain) CNGeminiResult * geminiResult;                                 //@synthesize geminiResult=_geminiResult - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                           //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSString * channelIdentifier; 
@property (assign,nonatomic,__weak) id<CNUIGeminiDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CNUIGeminiDataSourceDelegate>)delegate;
-(void)setDelegate:(id<CNUIGeminiDataSourceDelegate>)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(CNGeminiManager *)geminiManager;
-(void)setGeminiManager:(CNGeminiManager *)arg1 ;
-(NSString *)channelIdentifier;
-(void)channelsDidChangeForGeminiManager:(id)arg1 ;
-(void)setGeminiResult:(CNGeminiResult *)arg1 ;
-(CNGeminiResult *)geminiResult;
-(id)initWithGeminiManager:(id)arg1 ;
-(void)resetDataSource;
@end
