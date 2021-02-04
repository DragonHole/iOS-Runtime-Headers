/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKitUI/CLKUIResourceManager.h>

@class NSMutableDictionary, EAGLContext, EAGLSharegroup;

@interface CLKUIGLResourceManager : CLKUIResourceManager {

	NSMutableDictionary* _programsByName;
	EAGLContext* _context;
	EAGLSharegroup* _shareGroup;

}
+(id)programWithName:(id)arg1 ;
+(id)sharedGLInstance;
+(id)shareGroup;
+(id)context;
-(id)_newAtlasForUuid:(id)arg1 ;
-(void)_purgeAtlases:(id)arg1 ;
-(id)init;
@end
