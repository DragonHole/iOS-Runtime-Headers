/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSet;

@interface _SBSDisplayIdentifiersCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSSet* _displayIdentifiers;
	int _changedToken;
	/*^block*/id _changedBlock;

}
+(id)sharedInstance;
-(void)_queue_noteChanged;
-(id)displayIdentifiers;
-(void)registerChangedBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
@end

