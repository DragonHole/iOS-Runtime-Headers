/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVContainerSyncTaskGroup.h>

@interface CardDAVFolderSyncTaskGroup : CoreDAVContainerSyncTaskGroup {

	BOOL _isInitialSync;

}

@property (assign,nonatomic) BOOL isInitialSync;              //@synthesize isInitialSync=_isInitialSync - In the implementation block
-(BOOL)isInitialSync;
-(void)setIsInitialSync:(BOOL)arg1 ;
-(Class)bulkChangeTaskClass;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 syncItemOrder:(BOOL)arg5 context:(id)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8 appSpecificDataItemClass:(Class)arg9 ;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 context:(id)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7 appSpecificDataItemClass:(Class)arg8 ;
-(id)copyGetTaskWithURL:(id)arg1 ;
-(id)dataContentType;
-(id)copyMultiGetTaskWithURLs:(id)arg1 ;
@end

