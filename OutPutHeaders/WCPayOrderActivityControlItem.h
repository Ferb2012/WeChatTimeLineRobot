/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class NSString;

@interface WCPayOrderActivityControlItem : MMObject {
	BOOL isButtonEnable;
	BOOL isButtonHidden;
	BOOL isActivityViewHidden;
	NSString* activityUrl;
	NSString* buttonTitle;
}
@property(assign, nonatomic) BOOL isActivityViewHidden;
@property(assign, nonatomic) BOOL isButtonHidden;
@property(assign, nonatomic) BOOL isButtonEnable;
@property(retain, nonatomic) NSString* buttonTitle;
@property(retain, nonatomic) NSString* activityUrl;
-(void).cxx_destruct;
@end
