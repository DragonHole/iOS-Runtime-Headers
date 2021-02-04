/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUGLObject.h>

@class NSMutableDictionary;

@interface NUGLFramebuffer : NUGLObject {

	NSMutableDictionary* _attachments;

}
-(void)delete;
-(void)attach:(id)arg1 to:(unsigned)arg2 ;
-(void)write:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)detach:(id)arg1 from:(unsigned)arg2 ;
-(void)read:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)generate:(id)arg1 ;
-(void)useWithTarget:(unsigned)arg1 context:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)bind:(unsigned)arg1 context:(id)arg2 ;
-(void)unbind:(unsigned)arg1 context:(id)arg2 ;
-(void)removeAllAttachments;
-(id)init;
@end
