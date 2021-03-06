/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NPKExpressPassControllerDelegate <NSObject>
@optional
-(void)expressPassController:(id)arg1 didStartTransactionForPass:(id)arg2;
-(void)expressPassController:(id)arg1 didCompleteTransactionForPass:(id)arg2;
-(void)expressPassController:(id)arg1 didFailTransactionForPass:(id)arg2;
-(void)expressPassController:(id)arg1 didUpdateExpressPasses:(id)arg2 expressPassesInformation:(id)arg3;

@end

