/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CMessageWrap, NSString;

@interface BrandSessionCache : XXUnknownSuperclass {
	BOOL hasNewArrival;
	NSString* latestMsgOwner;
	CMessageWrap* latestMsg;
}
@property(retain, nonatomic) CMessageWrap* latestMsg;
@property(copy, nonatomic) NSString* latestMsgOwner;
@property(assign, nonatomic) BOOL hasNewArrival;
-(void).cxx_destruct;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
@end
