/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SidecarCore/SidecarTransfer.h>

@class NSMutableDictionary, NSMutableArray;

@interface SidecarTransferReceiver : SidecarTransfer {

	NSMutableDictionary* _groups;
	NSMutableArray* _orderedGroups;

}
-(void)handleMessage:(id)arg1 ;
-(id)initWithSession:(id)arg1 requestID:(long long)arg2 ;
-(/*^block*/id)_resumeMessage:(id)arg1 ;
@end
