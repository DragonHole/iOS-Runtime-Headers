/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAccessibilityCustomRotor.h>

@class NSOrderedSet;

@interface STAXCustomRotor : UIAccessibilityCustomRotor {

	NSOrderedSet* _rotorItems;

}

@property (nonatomic,copy) NSOrderedSet * rotorItems;              //@synthesize rotorItems=_rotorItems - In the implementation block
+(id)rotorWithName:(id)arg1 ;
-(id)rotorItemBefore:(id)arg1 ;
-(id)rotorItemAfter:(id)arg1 ;
-(long long)indexOfRotorItem:(id)arg1 ;
-(NSOrderedSet *)rotorItems;
-(void)setRotorItems:(NSOrderedSet *)arg1 ;
-(id)description;
-(id)initWithName:(id)arg1 ;
@end
