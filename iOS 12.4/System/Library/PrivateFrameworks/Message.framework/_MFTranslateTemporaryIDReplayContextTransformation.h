/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFOfflineCacheReplayContextTransformation.h>

@class NSString;

@interface _MFTranslateTemporaryIDReplayContextTransformation : MFOfflineCacheReplayContextTransformation {

	NSString* _temporaryID;
	NSString* _translatedID;

}
+(BOOL)supportsSecureCoding;
-(void)applyToReplayContext:(id)arg1 ;
-(id)initWithTemporaryID:(id)arg1 translatedID:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

