/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKDOperationInfoDelegate <NSObject>
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@required
-(void)wasUnexpectedlyUnregisteredForOperationID:(id)arg1;
-(void)operationWithID:(id)arg1 didProgress:(id)arg2;
-(void)operationWithID:(id)arg1 didComplete:(id)arg2;
-(BOOL)isInvalidated;

@end

