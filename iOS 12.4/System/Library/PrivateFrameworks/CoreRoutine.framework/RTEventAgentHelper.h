/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RTEventAgentHelper : NSObject {

	NSString* _restorationIdentifier;

}

@property (nonatomic,retain) NSString * restorationIdentifier;              //@synthesize restorationIdentifier=_restorationIdentifier - In the implementation block
+(BOOL)launchdManaged;
+(id)signingIdentifierFromSelf;
-(id)initWithRestorationIdentifier:(id)arg1 ;
-(NSString *)restorationIdentifier;
-(void)setRestorationIdentifier:(NSString *)arg1 ;
@end

