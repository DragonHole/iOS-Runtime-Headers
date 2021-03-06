/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface SCRCArgumentSubcommand : NSObject {

	NSString* _subcommandName;
	NSMutableArray* _optionArray;

}
+(id)subcommandWithName:(id)arg1 ;
-(void)showHelp;
-(void)addOption:(id)arg1 argument:(id)arg2 target:(id)arg3 action:(SEL)arg4 argumentDescription:(id)arg5 required:(BOOL)arg6 ;
-(id)optionArray;
-(id)subcommandName;
-(id)formattedHelpHeader;
-(id)formattedHelpFooter;
-(void)addOptions;
-(void)stopDueToSigTerm;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)stop;
-(long long)compare:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(int)run;
@end

