/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:55 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface CADisplayPreferences : NSObject <NSCopying, NSMutableCopying> {

	CADisplayPreferencesPriv* _priv;

}

@property (assign,nonatomic) BOOL matchContent; 
@property (nonatomic,copy) NSString * preferredHdrMode; 
@property (nonatomic,readonly) int _preferredHdrType; 
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)matchContent;
-(NSString *)preferredHdrMode;
-(int)_preferredHdrType;
-(id)initWithMatchContent:(BOOL)arg1 preferredHdrType:(int)arg2 ;
-(id)initWithPreferences:(id)arg1 ;
-(void)setMatchContent:(BOOL)arg1 ;
-(void)setPreferredHdrMode:(NSString *)arg1 ;
@end
