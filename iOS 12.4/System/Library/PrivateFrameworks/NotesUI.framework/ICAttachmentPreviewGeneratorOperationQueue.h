/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperationQueue.h>

@interface ICAttachmentPreviewGeneratorOperationQueue : NSOperationQueue {

	unsigned long long _suspendCount;

}

@property (assign,nonatomic) unsigned long long suspendCount;              //@synthesize suspendCount=_suspendCount - In the implementation block
-(unsigned long long)suspendCount;
-(void)setSuspendCount:(unsigned long long)arg1 ;
-(void)resume;
-(void)suspend;
@end
