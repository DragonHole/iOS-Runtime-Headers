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
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CAFilter : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	unsigned _type;
	NSString* _name;
	unsigned _flags;
	void* _attr;
	void* _cache;

}

@property (readonly) NSString * type; 
@property (copy) NSString * name; 
@property (getter=isEnabled) BOOL enabled; 
@property (assign) BOOL cachesInputImage; 
@property (getter=isAccessibility) BOOL accessibility; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)filterWithName:(id)arg1 ;
+(id)filterWithType:(id)arg1 ;
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)filterTypes;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(BOOL)isEnabled;
-(id)initWithType:(id)arg1 ;
-(void)setDefaults;
-(void)setAccessibility:(BOOL)arg1 ;
-(void)setCachesInputImage:(BOOL)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(BOOL)cachesInputImage;
-(BOOL)isAccessibility;
-(Object*)CA_copyRenderValue;
-(void)encodeWithCAMLWriter:(id)arg1 ;
@end

