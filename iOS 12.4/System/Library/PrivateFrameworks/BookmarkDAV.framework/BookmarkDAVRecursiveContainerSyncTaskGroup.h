/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVRecursiveContainerSyncTaskGroup.h>

@interface BookmarkDAVRecursiveContainerSyncTaskGroup : CoreDAVRecursiveContainerSyncTaskGroup
-(id)copyFolderMultiGetTaskWithURLs:(id)arg1 ;
-(BOOL)shouldSyncChildWithResourceType:(id)arg1 ;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousPTag:(id)arg3 previousSyncToken:(id)arg4 actions:(id)arg5 syncItemOrder:(BOOL)arg6 context:(id)arg7 accountInfoProvider:(id)arg8 taskManager:(id)arg9 ;
-(id)dataContentType;
-(id)copyMultiGetTaskWithURLs:(id)arg1 ;
@end

