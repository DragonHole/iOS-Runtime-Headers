/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@class NSString, SKSoundSource;

@interface SKPlaySound : SKAction {

	NSString* _filePath;
	NSString* _fileName;
	SKCPlaySound* _mycaction;
	CGPoint _position;
	SKSoundSource* _soundSource;

}
+(BOOL)supportsSecureCoding;
+(id)playSoundFileNamed:(id)arg1 atPosition:(CGPoint)arg2 waitForCompletion:(BOOL)arg3 ;
+(id)_audioURLWithName:(id)arg1 bundle:(id)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)reversedAction;
@end

