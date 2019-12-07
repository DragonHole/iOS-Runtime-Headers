/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface CACOnboardingCommandGroup : NSObject {

	NSString* _groupTitle;
	NSArray* _commands;

}

@property (nonatomic,retain) NSString * groupTitle;              //@synthesize groupTitle=_groupTitle - In the implementation block
@property (nonatomic,retain) NSArray * commands;                 //@synthesize commands=_commands - In the implementation block
+(id)groupWithIdentifier:(id)arg1 ;
+(id)groupsFromIdentifiers:(id)arg1 ;
+(id)allCommandGroups;
-(void)setGroupTitle:(NSString *)arg1 ;
-(NSString *)groupTitle;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)initWithGroupTitle:(id)arg1 commands:(id)arg2 ;
@end
