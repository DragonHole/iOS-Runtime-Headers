/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessageUI/MessageUI-Structs.h>
@class MFLock;

@interface MFWebKitMainThread : NSObject {

	CFDictionaryRef _visibleDict;
	MFLock* _visibleDictLock;

}
+(id)sharedInstance;
-(int)dictValueForMimeType:(id)arg1 ;
-(void)_mainThreadPopulateDictForMimeType:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

