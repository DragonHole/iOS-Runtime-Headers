/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTSyncStorage.h>

@protocol MTSyncStorage
@required
-(void)loadPendingChangesWithCompletion:(/*^block*/id)arg1;
-(void)savePendingChanges:(id)arg1;

@end


@protocol SYChangeSerializer, NAScheduler;
@interface MTSyncStorage : NSObject <MTSyncStorage> {

	long long _dataClass;
	id<SYChangeSerializer> _pendingChangeSerializer;
	id<NAScheduler> _archiverScheduler;

}

@property (nonatomic,readonly) long long dataClass;                                         //@synthesize dataClass=_dataClass - In the implementation block
@property (nonatomic,readonly) id<SYChangeSerializer> pendingChangeSerializer;              //@synthesize pendingChangeSerializer=_pendingChangeSerializer - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> archiverScheduler;                           //@synthesize archiverScheduler=_archiverScheduler - In the implementation block
+(id)_pathComponentForDataClass:(long long)arg1 ;
-(long long)dataClass;
-(id)_syncDataPath;
-(id<NAScheduler>)archiverScheduler;
-(id)syncDataFile;
-(id<SYChangeSerializer>)pendingChangeSerializer;
-(void)loadPendingChangesWithCompletion:(/*^block*/id)arg1 ;
-(void)savePendingChanges:(id)arg1 ;
-(id)initWithDataClass:(long long)arg1 serializer:(id)arg2 ;
@end
